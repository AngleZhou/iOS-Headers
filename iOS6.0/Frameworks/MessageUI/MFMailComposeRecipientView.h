/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MessageUI/MFComposeHeaderView.h>

#import "MFComposeRecipientAtomDelegate-Protocol.h"
#import "MFDragDestination-Protocol.h"
#import "MFDragSource-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MFComposeRecipient, MFComposeRecipientAtom, MFComposeTextField, NSArray, NSCountedSet, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UIButton, UIImage, UITextField, UIView;

@interface MFMailComposeRecipientView : MFComposeHeaderView <UITextFieldDelegate, MFComposeRecipientAtomDelegate, MFDragSource, MFDragDestination>
{
    MFComposeTextField *_textField;
    NSMutableArray *_recipients;
    NSMutableDictionary *_atoms;
    NSCountedSet *_uncommentedAddresses;
    struct __CFDictionary *_atomStylesByRecipient;
    int _defaultStyle;
    MFComposeRecipientAtom *_selectedAtom;
    MFComposeRecipient *_placeholderRecipient;
    int _dragSourceOriginalIndex;
    UIButton *_addButton;
    BOOL _editable;
    BOOL _picking;
    BOOL _focused;
    NSArray *_properties;
    UIImage *_buttonImage;
    UIImage *_pressedImage;
    int _maxRecipients;
    BOOL _parentIsClosing;
    BOOL _deselectOnNextKeyboardInput;
    BOOL _clearSelectionUIAfterFirstResponder;
    NSTimer *_delayTimer;
    double _inputDelay;
    BOOL _didIgnoreFirstResponderResign;
}

@property(nonatomic) BOOL didIgnoreFirstResponderResign; // @synthesize didIgnoreFirstResponderResign=_didIgnoreFirstResponderResign;
@property(nonatomic) int defaultAddressAtomStyle; // @synthesize defaultAddressAtomStyle=_defaultStyle;
@property(nonatomic) BOOL focused; // @synthesize focused=_focused;
@property(readonly, nonatomic) UIView *addButton; // @synthesize addButton=_addButton;
@property(readonly, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) double inputDelay; // @synthesize inputDelay=_inputDelay;
@property(nonatomic) int maxRecipients; // @synthesize maxRecipients=_maxRecipients;
@property(nonatomic) BOOL editable; // @synthesize editable=_editable;
- (struct CGRect)_inactiveTextFieldFrame;
- (float)_textFieldOffsetForRow:(int)arg1;
- (float)_topRowTextWidth;
- (BOOL)finishEnteringRecipient;
- (void)parentDidClose;
- (void)parentWillClose;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)showAtoms;
- (float)textFieldOffsetForNumberOfRowsToScroll:(unsigned int)arg1 numberOfRowsAboveField:(int)arg2;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (void)_deleteSelectedAtom;
- (void)_deselectAtom;
- (void)windowDidResignKey:(id)arg1;
- (void)textChanged:(id)arg1;
- (void)composeRecipientAtomSelectNext:(id)arg1;
- (void)composeRecipientAtomSelectPrevious:(id)arg1;
- (void)_delayTimerFired:(id)arg1;
- (void)_cancelDelayTimer;
- (BOOL)becomeFirstResponder;
- (void)composeRecipientAtomShowPersonCard:(id)arg1;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (BOOL)mf_chooseSelectedSearchResultForTextField:(id)arg1;
- (BOOL)mf_presentSearchResultsForTextField:(id)arg1;
- (void)mf_selectPreviousSearchResultForTextField:(id)arg1;
- (void)mf_selectNextSearchResultForTextField:(id)arg1;
- (BOOL)mf_textFieldShowingSearchResults:(id)arg1;
- (void)addButtonClicked:(id)arg1;
- (void)_reflowAnimated:(BOOL)arg1;
- (void)reflow;
- (void)deselectComposeRecipientAtom:(id)arg1;
- (void)selectComposeRecipientAtom:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)_addable;
- (id)supportedDropTypes:(id)arg1;
- (id)viewForDrop;
- (void)dropItem:(id)arg1;
- (struct CGRect)dropRect;
- (void)dragExited:(id)arg1;
- (void)dragUpdated:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)dragEntered:(id)arg1 atPoint:(struct CGPoint)arg2;
- (int)_recipientIndexAtPoint:(struct CGPoint)arg1;
- (id)viewForDragSource;
- (void)dragCompletedForItem:(id)arg1 success:(BOOL)arg2;
- (void)animatePlaceholderForDragFailure:(id)arg1;
- (void)dragStartedWithItem:(id)arg1;
- (id)viewForDraggedItem:(id)arg1 atScale:(float)arg2;
- (struct CGRect)frameForDraggedItem:(id)arg1;
- (id)dragInitiatedAtPoint:(struct CGPoint)arg1;
- (void)_removeAllRecipients;
- (void)_removeUncommentedAddress:(id)arg1;
- (void)_addUncommentedAddress:(id)arg1;
- (BOOL)containsAddress:(id)arg1;
- (void)clearAllRecipientAddressAtomStyles;
- (int)_addressAtomStyleForRecipient:(id)arg1;
- (void)_removeAddressAtomStyleForRecipient:(id)arg1;
- (void)setAddressAtomStyle:(int)arg1 forRecipient:(id)arg2;
@property(retain, nonatomic) MFComposeRecipient *placeholderRecipient;
- (void)addRecord:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (void)_addRecord:(void *)arg1 identifier:(int)arg2;
- (void)addAddress:(id)arg1;
- (void)addRecipient:(id)arg1 index:(unsigned int)arg2 animate:(BOOL)arg3;
- (void)addRecipient:(id)arg1;
- (void)removeRecipient:(id)arg1;
@property(copy, nonatomic) NSArray *addresses;
- (void)setProperties:(id)arg1;
- (void)setProperty:(int)arg1;
- (BOOL)hasContent;
- (void)clearText;
@property(readonly, nonatomic) int numberOfRowsOfTextInField;
@property(readonly, nonatomic) float offsetForRowWithTextField;
@property(readonly, nonatomic) NSString *text;
- (void)willMoveToSuperview:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
