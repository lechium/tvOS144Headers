//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PXOneUpPresentation, UIPinchGestureRecognizer, UIViewController;

@protocol PXOneUpPresentationImplementationDelegate <NSObject>
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 commitPreviewViewController:(UIViewController *)arg2;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 didDismissPreviewViewController:(UIViewController *)arg2 committing:(_Bool)arg3;
- (UIViewController *)previewViewControllerForOneUpPresentation:(PXOneUpPresentation *)arg1 allowingActions:(_Bool)arg2;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 stopAnimated:(_Bool)arg2;
- (_Bool)oneUpPresentation:(PXOneUpPresentation *)arg1 startAnimated:(_Bool)arg2 interactiveMode:(long long)arg3;

@optional
- (_Bool)oneUpPresentation:(PXOneUpPresentation *)arg1 handlePresentingPinchGestureRecognizer:(UIPinchGestureRecognizer *)arg2;
- (void)oneUpPresentationInvalidatePresentingGeometry:(PXOneUpPresentation *)arg1;
- (_Bool)oneUpPresentationCanStop:(PXOneUpPresentation *)arg1;
- (_Bool)oneUpPresentationCanStart:(PXOneUpPresentation *)arg1;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 presentingViewControllerViewDidDisappear:(_Bool)arg2;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 presentingViewControllerViewWillDisappear:(_Bool)arg2;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 presentingViewControllerViewDidAppear:(_Bool)arg2;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 presentingViewControllerViewWillAppear:(_Bool)arg2;
@end

