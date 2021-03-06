/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class PXOneUpPresentation;


@protocol PXUIWidget <PXWidget>
@property (nonatomic,retain) PXOneUpPresentation * oneUpPresentation; 
@property (nonatomic,readonly) BOOL cursorInteractionEnabled; 
@optional
-(void)prepareForInteractiveTransition:(id)arg1;
-(void)controllerTraitCollectionDidChangeFrom:(id)arg1 to:(id)arg2;
-(void)environmentDidUpdateFocusInContext:(id)arg1;
-(id)regionOfInterestForContext:(id)arg1;
-(void)preloadWithSourceRegionOfInterest:(id)arg1 forContext:(id)arg2;
-(id)zoomAnimationCoordinatorForContext:(id)arg1;
-(id)previewViewControllerAtLocation:(CGPoint)arg1 fromSourceView:(id)arg2;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
-(void)commitPreviewViewController:(id)arg1;
-(BOOL)containsPoint:(CGPoint)arg1 forCoordinateSpace:(id)arg2;
-(id)imageViewBasicTileForPreviewingAtPoint:(CGPoint)arg1;
-(id)bestCursorTileForLiftingAtPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2;
-(PXOneUpPresentation *)oneUpPresentation;
-(void)setOneUpPresentation:(id)arg1;
-(BOOL)cursorInteractionEnabled;

@end

