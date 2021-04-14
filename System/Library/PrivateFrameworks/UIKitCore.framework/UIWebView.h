/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WebPolicyDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIWebViewInternal, UIScrollView, NSURLRequest, NSString;

@interface UIWebView : UIView <WebPolicyDelegate, NSCoding, UIScrollViewDelegate> {

	UIWebViewInternal* _internal;

}

@property (assign,nonatomic) id<UIWebViewDelegate> delegate; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,readonly) NSURLRequest * request; 
@property (getter=canGoBack,nonatomic,readonly) BOOL canGoBack; 
@property (getter=canGoForward,nonatomic,readonly) BOOL canGoForward; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (assign,nonatomic) BOOL scalesPageToFit; 
@property (assign,nonatomic) BOOL detectsPhoneNumbers; 
@property (assign,nonatomic) unsigned long long dataDetectorTypes; 
@property (assign,nonatomic) BOOL allowsInlineMediaPlayback; 
@property (assign,nonatomic) BOOL mediaPlaybackRequiresUserAction; 
@property (assign,nonatomic) BOOL mediaPlaybackAllowsAirPlay; 
@property (assign,nonatomic) BOOL suppressesIncrementalRendering; 
@property (assign,nonatomic) BOOL keyboardDisplayRequiresUserAction; 
@property (assign,nonatomic) long long paginationMode; 
@property (assign,nonatomic) long long paginationBreakingMode; 
@property (assign,nonatomic) double pageLength; 
@property (assign,nonatomic) double gapBetweenPages; 
@property (nonatomic,readonly) unsigned long long pageCount; 
@property (assign,nonatomic) BOOL allowsPictureInPictureMediaPlayback; 
@property (assign,nonatomic) BOOL allowsLinkPreview; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_relativePathFromAbsolutePath:(id)arg1 removingPathComponents:(unsigned long long)arg2 ;
+(void)_fixPathsForSandboxDirectoryChange;
+(void)_updatePersistentStoragePaths;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<UIWebViewDelegate>)delegate;
-(void)setDelegate:(id<UIWebViewDelegate>)arg1 ;
-(NSURLRequest *)request;
-(void)stopLoading;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)reload;
-(void)setBounds:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)scrollViewDidChangeAdjustedContentInset:(id)arg1 ;
-(void)_reportError:(id)arg1 ;
-(BOOL)isLoading;
-(unsigned long long)pageCount;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_documentView;
-(void)goBack;
-(void)goForward;
-(void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(id)_scrollView;
-(id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3 ;
-(id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4 ;
-(BOOL)webView:(id)arg1 resource:(id)arg2 canAuthenticateAgainstProtectionSpace:(id)arg3 forDataSource:(id)arg4 ;
-(id)webView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3 ;
-(void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3 ;
-(void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4 ;
-(void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2 ;
-(void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 unableToImplementPolicyWithError:(id)arg2 frame:(id)arg3 ;
-(void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3 ;
-(void)loadRequest:(id)arg1 ;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(void)_frameOrBoundsChanged;
-(void)copy:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(BOOL)allowsPictureInPictureMediaPlayback;
-(BOOL)suppressesIncrementalRendering;
-(void)_setPaginationMode:(long long)arg1 ;
-(long long)_paginationMode;
-(void)_setPaginationBehavesLikeColumns:(BOOL)arg1 ;
-(BOOL)_paginationBehavesLikeColumns;
-(void)_setPageLength:(double)arg1 ;
-(double)_pageLength;
-(void)_setGapBetweenPages:(double)arg1 ;
-(double)_gapBetweenPages;
-(unsigned long long)_pageCount;
-(id)stringByEvaluatingJavaScriptFromString:(id)arg1 ;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(void)webViewClose:(id)arg1 ;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 ;
-(BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 ;
-(id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 ;
-(void)webView:(id)arg1 printFrameView:(id)arg2 ;
-(void)webView:(id)arg1 frame:(id)arg2 exceededDatabaseQuotaForSecurityOrigin:(id)arg3 database:(id)arg4 ;
-(void)webView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned long long)arg3 ;
-(void)webViewSupportedOrientationsUpdated:(id)arg1 ;
-(void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4 ;
-(void)setSuppressesIncrementalRendering:(BOOL)arg1 ;
-(void)setAllowsPictureInPictureMediaPlayback:(BOOL)arg1 ;
-(BOOL)mediaPlaybackAllowsAirPlay;
-(void)setMediaPlaybackAllowsAirPlay:(BOOL)arg1 ;
-(id)_browserView;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)_setDrawsCheckeredPattern:(BOOL)arg1 ;
-(void)setDetectsPhoneNumbers:(BOOL)arg1 ;
-(UIScrollView *)scrollView;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)setAllowsInlineMediaPlayback:(BOOL)arg1 ;
-(void)setPaginationMode:(long long)arg1 ;
-(long long)paginationMode;
-(void)setPageLength:(double)arg1 ;
-(double)pageLength;
-(void)setGapBetweenPages:(double)arg1 ;
-(double)gapBetweenPages;
-(BOOL)allowsInlineMediaPlayback;
-(void)setAllowsLinkPreview:(BOOL)arg1 ;
-(BOOL)allowsLinkPreview;
-(void)select:(id)arg1 ;
-(unsigned long long)dataDetectorTypes;
-(BOOL)mediaPlaybackRequiresUserAction;
-(void)setMediaPlaybackRequiresUserAction:(BOOL)arg1 ;
-(void)_updateScrollViewInsetAdjustmentBehavior;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_share:(id)arg1 ;
-(BOOL)_effectiveAppearanceIsDark;
-(Class)_printFormatterClass;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(CGImageRef)newSnapshotWithRect:(CGRect)arg1 ;
-(id)_networkInterfaceName;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)_appliesExclusiveTouchToSubviewTree;
-(BOOL)_shouldUseViewForSceneDraggingBehavior;
-(void)webViewMainFrameDidFirstVisuallyNonEmptyLayoutInFrame:(id)arg1 ;
-(void)_updateScrollerViewForInputView:(id)arg1 ;
-(unsigned long long)_audioSessionCategoryOverride;
-(BOOL)_alwaysDispatchesScrollEvents;
-(BOOL)_allowsPictureInPictureVideo;
-(void)view:(id)arg1 didSetFrame:(CGRect)arg2 oldFrame:(CGRect)arg3 ;
-(void)_webView:(id)arg1 didChangeAvoidsUnsafeArea:(BOOL)arg2 ;
-(void)webViewMainFrameDidFinishLoad:(id)arg1 ;
-(void)webViewMainFrameDidFailLoad:(id)arg1 withError:(id)arg2 ;
-(void)webViewMainFrameDidCommitLoad:(id)arg1 ;
-(void)saveStateToHistoryItem:(id)arg1 forWebView:(id)arg2 ;
-(void)restoreStateFromHistoryItem:(id)arg1 forWebView:(id)arg2 ;
-(BOOL)detectsPhoneNumbers;
-(BOOL)_alwaysConstrainsScale;
-(BOOL)_webView:(id)arg1 previewIsAllowedForPosition:(CGPoint)arg2 ;
-(id)_webView:(id)arg1 previewViewControllerForURL:(id)arg2 ;
-(void)_webView:(id)arg1 willPresentPreview:(id)arg2 ;
-(void)_webView:(id)arg1 didDismissPreview:(id)arg2 committing:(BOOL)arg3 ;
-(void)_webView:(id)arg1 commitPreview:(id)arg2 ;
-(id)_webView:(id)arg1 presentationSnapshotForPreview:(id)arg2 ;
-(id)_webView:(id)arg1 presentationRectsForPreview:(id)arg2 ;
-(BOOL)scalesPageToFit;
-(void)setScalesPageToFit:(BOOL)arg1 ;
-(void)scrollViewWasRemoved:(id)arg1 ;
-(void)_setScalesPageToFitViewportSettings;
-(void)_setRichTextReaderViewportSettings;
-(void)_updateBrowserViewExposedScrollViewRect;
-(void)_updateCheckeredPattern;
-(void)_setDrawInWebThread:(BOOL)arg1 ;
-(void)_updateOpaqueAndBackgroundColor;
-(BOOL)_effectiveAppearanceIsInactive;
-(void)_updateViewSettings;
-(void)_didRotate:(id)arg1 ;
-(void)_webViewCommonInitWithWebView:(id)arg1 scalesPageToFit:(BOOL)arg2 ;
-(void)_rescaleDocument;
-(void)_didCompleteScrolling;
-(void)_updateRequest;
-(long long)paginationBreakingMode;
-(void)setPaginationBreakingMode:(long long)arg1 ;
-(BOOL)keyboardDisplayRequiresUserAction;
-(void)setKeyboardDisplayRequiresUserAction:(BOOL)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 enableReachability:(BOOL)arg2 ;
-(void)_beginRotation;
-(void)_finishRotation;
-(void)webView:(id)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4 ;
-(id)_initWithWebView:(id)arg1 ;
-(id)_pdfViewHandler;
-(void)_setOverridesOrientationChangeEventHandling:(BOOL)arg1 ;
-(void)_setWebSelectionEnabled:(BOOL)arg1 ;
-(void)_setAlwaysConstrainsScale:(BOOL)arg1 ;
-(void)_setAlwaysDispatchesScrollEvents:(BOOL)arg1 ;
-(void)_setAudioSessionCategoryOverride:(unsigned long long)arg1 ;
-(void)_setAllowsPictureInPictureVideo:(BOOL)arg1 ;
-(void)_setNetworkInterfaceName:(id)arg1 ;
@end

