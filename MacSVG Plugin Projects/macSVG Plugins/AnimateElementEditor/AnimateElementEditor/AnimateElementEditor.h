//
//  AnimateElementEditor.h
//  AnimateElementEditor
//
//  Created by Douglas Ward on 9/4/16.
//  Copyright © 2016 ArkPhone LLC. All rights reserved.
//

#import <MacSVGPlugin/MacSVGPlugin.h>

//@class KeyValuesPopoverViewController;

@interface AnimateElementEditor : MacSVGPlugin <NSTableViewDelegate, NSTableViewDataSource, NSTextFieldDelegate, NSControlTextEditingDelegate>
{
    IBOutlet NSPopUpButton * calcModePopUpButton;
    IBOutlet NSPopUpButton * attributeTypePopUpButton;
    IBOutlet NSTextField * beginTextField;
    IBOutlet NSTextField * durTextField;
    IBOutlet NSComboBox * attributeNameComboBox;
    IBOutlet NSComboBox * repeatCountComboBox;
    IBOutlet NSTabView * animateElementTabView;
    IBOutlet NSTextField * fromTextField;
    IBOutlet NSTextField * toTextField;
    IBOutlet NSTableView * valuesTableView;

    IBOutlet NSButton * addValuesRowButton;
    IBOutlet NSButton * deleteValuesRowButton;
    
    IBOutlet NSButton * cancelButton;
    IBOutlet NSButton * applyChangesButton;

    BOOL isAwake;
}

//@property (strong) NSMutableArray * valuesArray;

- (IBAction)cancelButtonAction:(id)sender;
- (IBAction)applyChangesButtonAction:(id)sender;

- (IBAction)editKeyValuesButtonAction:(id)sender;

- (IBAction)itemTextFieldUpdated:(id)sender;

@end
