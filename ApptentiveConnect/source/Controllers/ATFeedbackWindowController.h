//
//  ATFeedbackWindowController.h
//  ApptentiveConnect
//
//  Created by Andrew Wooster on 6/1/11.
//  Copyright 2011 Apptentive, Inc. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "ATFeedback.h"
#import "ATImageView.h"
#import "ATAPIRequest.h"

@interface ATFeedbackWindowController : NSWindowController <NSWindowDelegate, NSTabViewDelegate, NSTextViewDelegate, NSComboBoxDelegate, ATAPIRequestDelegate> {
    IBOutlet NSTabView *topTabView;
    IBOutlet NSTextView *feedbackTextView;
    IBOutlet NSTextView *questionTextView;
    IBOutlet NSTextView *bugTextView;
    IBOutlet ATImageView *screenshotView;
    IBOutlet NSProgressIndicator *progressIndicator;
    IBOutlet NSComboBox *nameBox;
    IBOutlet NSComboBox *emailBox;
    IBOutlet NSComboBox *phoneNumberBox;
    IBOutlet NSButton *sendButton;
@private
    ATAPIRequest *feedbackRequest;
}
@property (nonatomic, retain) ATFeedback *feedback;
- (id)initWithFeedback:(ATFeedback *)newFeedback;
- (void)setFeedbackType:(ATFeedbackType)feedbackType;
- (IBAction)browseForScreenshotPressed:(id)sender;
- (IBAction)cancelPressed:(id)sender;
- (IBAction)sendFeedbackPressed:(id)sender;
@end
