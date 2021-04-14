//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AFConversation, AceObject, NSArray, NSString, NSURL, UIView, UIViewController;
@protocol AFUIBugReportPresenting, SAAceCommand;

@protocol AFUIBugReportPresentingDelegate
- (UIView *)bugReportPresenterRequestsPresentingView:(id <AFUIBugReportPresenting>)arg1;
- (AFConversation *)bugReportPresenterRequestsActiveConversation:(id <AFUIBugReportPresenting>)arg1;
- (double)bugReportPresenterRequestsLastPresentationTime:(id <AFUIBugReportPresenting>)arg1;
- (NSArray *)bugReportPresenterRequestsBugReportKeywordIdentifiers:(id <AFUIBugReportPresenting>)arg1;
- (NSString *)bugReportPresenterRequestsBugReportPrefixForTitle:(id <AFUIBugReportPresenting>)arg1;
- (_Bool)bugReportPresenterShouldPromptUserForScreenshotPermission:(id <AFUIBugReportPresenting>)arg1;
- (void)bugReportPresenter:(id <AFUIBugReportPresenting>)arg1 setBugReportingAvailable:(_Bool)arg2;
- (void)bugReportPresenter:(id <AFUIBugReportPresenting>)arg1 requestsToTakeScreenshotWithCompletion:(void (^)(UIImage *))arg2;
- (void)bugReportPresenter:(id <AFUIBugReportPresenting>)arg1 requestsToPerformAceCommand:(AceObject<SAAceCommand> *)arg2;
- (void)bugReportPresenter:(id <AFUIBugReportPresenting>)arg1 requestsToHandlePasscodeUnlockWithCompletion:(void (^)(long long))arg2;
- (void)bugReportPresenter:(id <AFUIBugReportPresenting>)arg1 requestsToOpenURL:(NSURL *)arg2 withCompletion:(void (^)(_Bool))arg3;
- (void)bugReportPresenter:(id <AFUIBugReportPresenting>)arg1 requestsToPresentViewController:(UIViewController *)arg2;
@end

