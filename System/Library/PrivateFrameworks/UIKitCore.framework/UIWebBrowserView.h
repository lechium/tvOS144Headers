/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWebDocumentView.h>
#import <UIKit/UIWebTouchEventsGestureRecognizerDelegate.h>
#import <UIKit/UIWebFormAccessoryDelegate.h>
#import <UIKitCore/_UIWebRotationDelegate.h>

@protocol UIFormPeripheral, UIWebAutoFillDelegate;
@class UIWebFormAccessory, NSObject, DOMNode, UIWebTouchEventsGestureRecognizer, UIWebFormDelegate, UIResponder, NSMutableArray, NSHashTable, NSMutableSet, NSLock, NSMutableDictionary, NSString;

@interface UIWebBrowserView : UIWebDocumentView <UIWebTouchEventsGestureRecognizerDelegate, UIWebFormAccessoryDelegate, _UIWebRotationDelegate> {

	UIWebFormAccessory* _accessory;
	NSObject*<UIFormPeripheral> _input;
	DOMNode* _currentAssistedNode;
	DOMNode* _assistedNodeStartingFocusRedirects;
	CGRect _inputViewBounds;
	CGRect _addressViewBounds;
	double _lastAdjustmentForScroller;
	unsigned long long _audioSessionCategoryOverride;
	unsigned _accessoryEnabled : 1;
	unsigned _forceInputView : 1;
	unsigned _formIsAutoFilling : 1;
	unsigned _inputViewObeysDOMFocus : 1;
	unsigned _allowDOMFocusRedirects : 1;
	unsigned _hasEditedTextField : 1;
	unsigned _alwaysDispatchesScrollEvents : 1;
	unsigned _allowsPictureInPictureVideo : 1;
	unsigned _allowsLinkPreview : 1;
	UIWebTouchEventsGestureRecognizer* _webTouchEventsGestureRecognizer;
	UIWebFormDelegate* _formDelegate;
	UIResponder* _editingDelegateForEverythingExceptForms;
	unsigned long long _dispatchedTouchEvents;
	NSMutableArray* _deferredTouchEvents;
	NSHashTable* _activeHighlighters;
	NSMutableSet* _overflowScrollViewsPendingInsertion;
	NSMutableSet* _overflowScrollViewsPendingDeletion;
	NSMutableSet* _overflowScrollViews;
	NSLock* _pendingOverflowDataLock;
	NSMutableArray* _pendingOverflowScrolls;
	BOOL _pendingGeometryChangeAfterOverflowScroll;
	NSMutableDictionary* _focusPreservingTokens;
	SCD_Struct_UI160 _messages;
	SCD_Struct_UI161 _pdf;
	id<UIWebAutoFillDelegate> _autoFillDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWebFormAccessory * _accessory;                                     //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) NSObject*<UIFormPeripheral> _input;                                  //@synthesize input=_input - In the implementation block
@property (nonatomic,retain) DOMNode * _currentAssistedNode;                                      //@synthesize currentAssistedNode=_currentAssistedNode - In the implementation block
@property (assign,getter=isAccessoryEnabled,nonatomic) BOOL accessoryEnabled;                     //@synthesize accessoryEnabled=_accessoryEnabled - In the implementation block
@property (assign,nonatomic) BOOL inputViewObeysDOMFocus;                                         //@synthesize inputViewObeysDOMFocus=_inputViewObeysDOMFocus - In the implementation block
@property (assign,nonatomic) BOOL allowDOMFocusRedirects;                                         //@synthesize allowDOMFocusRedirects=_allowDOMFocusRedirects - In the implementation block
@property (nonatomic,readonly) BOOL hasEditedTextField;                                           //@synthesize hasEditedTextField=_hasEditedTextField - In the implementation block
@property (assign,nonatomic) UIResponder * _editingDelegateForEverythingExceptForms;              //@synthesize editingDelegateForEverythingExceptForms=_editingDelegateForEverythingExceptForms - In the implementation block
@property (assign,nonatomic) BOOL allowsInlineMediaPlayback; 
@property (assign,nonatomic) BOOL mediaPlaybackRequiresUserAction; 
@property (nonatomic,readonly) BOOL isDispatchingTouchEvents; 
@property (assign,nonatomic) BOOL alwaysDispatchesScrollEvents; 
@property (assign,nonatomic) id<UIWebAutoFillDelegate> autoFillDelegate;                          //@synthesize autoFillDelegate=_autoFillDelegate - In the implementation block
@property (assign,nonatomic) unsigned audioSessionCategoryOverride; 
@property (assign,nonatomic) NSString * networkInterfaceName; 
@property (assign,nonatomic) BOOL allowsPictureInPictureVideo; 
@property (assign,nonatomic) BOOL allowsLinkPreview; 
+(void)initialize;
+(id)getUIWebBrowserViewForWebFrame:(id)arg1 ;
-(void)dealloc;
-(NSObject*<UIFormPeripheral>)_input;
-(id)keyCommands;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)isEditable;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)resignFirstResponder;
-(void)webView:(id)arg1 willCloseFrame:(id)arg2 ;
-(void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2 ;
-(void)copy:(id)arg1 ;
-(unsigned)audioSessionCategoryOverride;
-(NSString *)networkInterfaceName;
-(void)_setUnobscuredSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(void)webView:(id)arg1 addMessageToConsole:(id)arg2 withSource:(id)arg3 ;
-(void)webViewDidPreventDefaultForEvent:(id)arg1 ;
-(void)webView:(id)arg1 elementDidFocusNode:(id)arg2 ;
-(void)webView:(id)arg1 elementDidBlurNode:(id)arg2 ;
-(void)webViewDidCommitCompositingLayerChanges:(id)arg1 ;
-(void)webView:(id)arg1 didCreateOrUpdateScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 scrollSize:(id)arg4 forNode:(id)arg5 allowHorizontalScrollbar:(BOOL)arg6 allowVerticalScrollbar:(BOOL)arg7 ;
-(void)webView:(id)arg1 willRemoveScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 forNode:(id)arg4 ;
-(void)setAudioSessionCategoryOverride:(unsigned)arg1 ;
-(void)setNetworkInterfaceName:(NSString *)arg1 ;
-(UIWebFormAccessory *)_accessory;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_keyboardDidHide:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)_didScroll;
-(void)setAllowsInlineMediaPlayback:(BOOL)arg1 ;
-(BOOL)allowsInlineMediaPlayback;
-(void)setAllowsLinkPreview:(BOOL)arg1 ;
-(BOOL)allowsLinkPreview;
-(id)inputAccessoryView;
-(id)inputView;
-(BOOL)mediaPlaybackRequiresUserAction;
-(void)setMediaPlaybackRequiresUserAction:(BOOL)arg1 ;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(void)_keyboardDidChangeFrame:(id)arg1 ;
-(void)_promptForReplace:(id)arg1 ;
-(void)_transliterateChinese:(id)arg1 ;
-(void)_nextAccessoryTab:(id)arg1 ;
-(void)accessoryTab:(BOOL)arg1 ;
-(void)accessoryDone;
-(id)_editingDelegate;
-(void)_webTouchEventsRecognized:(id)arg1 ;
-(BOOL)isDispatchingTouchEvents;
-(void)_updateAccessory;
-(BOOL)_requiresKeyboardWhenFirstResponder;
-(BOOL)_requiresKeyboardResetOnReload;
-(void)accessoryClear;
-(void)accessoryAutoFill;
-(BOOL)_restoreFocusWithToken:(id)arg1 ;
-(void)_preserveFocusWithToken:(id)arg1 destructively:(BOOL)arg2 ;
-(BOOL)isAnyTouchOverActiveArea:(id)arg1 ;
-(void)_clearToken:(id)arg1 ;
-(void)acceptedAutoFillWord:(id)arg1 ;
-(BOOL)isAutoFillMode;
-(BOOL)shouldIgnoreWebTouch;
-(void)installGestureRecognizers;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(BOOL)_shouldRestorationInputViewsOnlyWhenKeepingFirstResponder;
-(id)_keyboardResponder;
-(id<UIWebAutoFillDelegate>)autoFillDelegate;
-(void)formDelegateTextDidChange;
-(void)_webViewFormEditedStatusHasChanged:(id)arg1 ;
-(BOOL)_isAutoFilling;
-(id)formElement;
-(BOOL)_hasSubviewContainingWebContent:(id)arg1 ;
-(BOOL)playsNicelyWithGestures;
-(id)textDocument;
-(void)_removeFindOnPageHighlighter:(id)arg1 ;
-(void)_zoomToRect:(CGRect)arg1 ensuringVisibilityOfRect:(CGRect)arg2 withScale:(double)arg3 forceScroll:(BOOL)arg4 ;
-(void)_startAssistingKeyboard;
-(void)_stopAssistingKeyboard;
-(void)_startAssistingNode:(id)arg1 ;
-(void)_stopAssistingNode:(id)arg1 ;
-(id)initWithWebView:(id)arg1 frame:(CGRect)arg2 ;
-(void)_clearFormAutoFillStateForFrame:(id)arg1 ;
-(void)set_accessory:(UIWebFormAccessory *)arg1 ;
-(void)set_input:(NSObject*<UIFormPeripheral>)arg1 ;
-(void)set_currentAssistedNode:(DOMNode *)arg1 ;
-(BOOL)allowDOMFocusRedirects;
-(BOOL)_keepKeyboardVisibleDuringFocusRedirects;
-(BOOL)_resignFirstResponderAndBlurFocusedElement;
-(void)_stopAssistingFormNode;
-(void)_prevAccessoryTab:(id)arg1 ;
-(void)_displayFormNodeInputView;
-(id)textFormElement;
-(UIResponder *)_editingDelegateForEverythingExceptForms;
-(void)_setInputViewBoundsForAutomaticKeyboardInfo:(id)arg1 adjustScrollView:(BOOL)arg2 ;
-(void)_updateFixedPositioningObjectsLayoutSoon;
-(void)_updateFixedPositioningObjectsLayoutDuringScroll;
-(void)_updateFixedPositioningObjectsLayoutAfterScroll;
-(void)_updateFixedPositioningObjectsLayoutAfterVisibleGeometryChange;
-(void)_updateFixedPositionContent;
-(void)_zoomToNode:(id)arg1 forceScroll:(BOOL)arg2 ;
-(void)_updateAutoFillButton;
-(void)_beginAllowingFocusRedirects;
-(void)assistFormNode:(id)arg1 ;
-(void)_endAllowingFocusRedirects;
-(void)setAllowDOMFocusRedirects:(BOOL)arg1 ;
-(void)_reloadInputViewsAfterPotentialFocusRedirect;
-(void)_focusAndAssistFormNode:(id)arg1 ;
-(void)_scrollCaretToVisible:(id)arg1 ;
-(void)_autoFillFrame:(id)arg1 ;
-(void)_assistFormNode:(id)arg1 ;
-(void)_startDeferringEvents;
-(void)_dispatchWebEvent:(id)arg1 ;
-(void)_endDeferringEvents;
-(BOOL)_shouldDeferEvents;
-(void)_deferWebEvent:(id)arg1 ;
-(void)_handleDeferredEvents;
-(CGRect)_activeRectForRectToCenter:(CGRect)arg1 ;
-(void)_centerRect:(CGRect)arg1 forSizeChange:(BOOL)arg2 withVisibleHeight:(double)arg3 pinningEdge:(unsigned long long)arg4 toValue:(double)arg5 ;
-(void)_zoomToRect:(CGRect)arg1 ensuringVisibilityOfRect:(CGRect)arg2 withScale:(double)arg3 forceScroll:(BOOL)arg4 formAssistantFrame:(CGRect)arg5 animationDuration:(double)arg6 ;
-(void)clearMessagesMatchingMask:(int)arg1 ;
-(DOMNode *)_currentAssistedNode;
-(CGSize)_defaultScrollViewContentSize;
-(void)redrawScaledDocument;
-(void)_noteOverflowScrollViewPendingInsertion:(id)arg1 ;
-(void)_noteOverflowScrollViewPendingDeletion:(id)arg1 ;
-(void)_removeAdditionalSubview:(id)arg1 ;
-(BOOL)alwaysDispatchesScrollEvents;
-(BOOL)appendOverflowScrollForNode:(id)arg1 offset:(CGPoint)arg2 whileScrolling:(BOOL)arg3 ;
-(void)_webThreadOverflowScrollOffsetChanged;
-(void)_addAdditionalSubview:(id)arg1 ;
-(SCD_Struct_UI51)scalesForContainerSize:(CGSize)arg1 ;
-(void)updateBoundariesOfScrollView:(id)arg1 withScales:(SCD_Struct_UI51)arg2 ;
-(CGRect)rectOfInterestForRotation;
-(double)minimumVerticalContentOffset;
-(double)heightToKeepVisible;
-(CGRect)activeRectForRectOfInterest:(CGRect)arg1 ;
-(BOOL)considerHeightOfRectOfInterestForRotation;
-(double)scaleForProposedNewScale:(double)arg1 andOldScale:(double)arg2 ;
-(CGSize)contentSizeForScrollView:(id)arg1 ;
-(void)_updateScrollerViewForInputView:(id)arg1 ;
-(void)simulateDidScroll;
-(void)setAllowsPictureInPictureVideo:(BOOL)arg1 ;
-(BOOL)allowsPictureInPictureVideo;
-(void)_resetFormDataForFrame:(id)arg1 ;
-(CGPoint)_convertWindowPointToViewport:(CGPoint)arg1 ;
-(void)_centerRect:(CGRect)arg1 forSizeChange:(BOOL)arg2 withVisibleHeight:(double)arg3 pinningEdge:(unsigned long long)arg4 ;
-(void)_zoomToRect:(CGRect)arg1 withScale:(double)arg2 ;
-(void)rotateEnclosingScrollViewToFrame:(CGRect)arg1 ;
-(id)messagesMatchingMask:(int)arg1 ;
-(void)_clearAllConsoleMessages;
-(BOOL)_dumpWebArchiveAtPath:(id)arg1 ;
-(void)_clearSelectionAndUI;
-(void)_setSelectedDOMRangeAndUpdateUI:(id)arg1 ;
-(void)_startURLificationIfNeededCoalesce:(BOOL)arg1 ;
-(id)_absoluteUrlRelativeToDocumentURL:(id)arg1 ;
-(void)setAlwaysDispatchesScrollEvents:(BOOL)arg1 ;
-(id)addFindOnPageHighlighter;
-(void)_overflowScrollView:(id)arg1 willStartScrollingForNode:(id)arg2 ;
-(void)_overflowScrollView:(id)arg1 scrollOffsetChangedForNode:(id)arg2 whileScrolling:(BOOL)arg3 ;
-(void)_overflowScrollView:(id)arg1 didEndScrollingForNode:(id)arg2 ;
-(id)_collectAdditionalSubviews;
-(void)set_editingDelegateForEverythingExceptForms:(UIResponder *)arg1 ;
-(BOOL)isAccessoryEnabled;
-(void)setAccessoryEnabled:(BOOL)arg1 ;
-(BOOL)inputViewObeysDOMFocus;
-(void)setInputViewObeysDOMFocus:(BOOL)arg1 ;
-(BOOL)hasEditedTextField;
-(void)setAutoFillDelegate:(id<UIWebAutoFillDelegate>)arg1 ;
@end

