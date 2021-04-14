/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSSet, PXAssetReference;


@protocol PXMutableZoomablePhotosViewModel <NSObject>
@property (assign,nonatomic) BOOL lowMemoryMode; 
@property (assign,nonatomic) BOOL viewBasedDecorationsEnabled; 
@property (nonatomic,copy) NSSet * draggedAssetReferences; 
@property (nonatomic,retain) PXAssetReference * dropTargetAssetReference; 
@property (assign,nonatomic) BOOL isInSelectMode; 
@property (assign,nonatomic) BOOL aspectFit; 
@property (assign,nonatomic) BOOL captionsVisible; 
@property (assign,nonatomic) BOOL wantsDimmedSelectionStyle; 
@property (assign,nonatomic) BOOL isPinching; 
@property (assign,nonatomic) BOOL isInteractiveZooming; 
@property (assign,nonatomic) BOOL wantsOverBackgroundFloatingHeaderAppearance; 
@property (assign,nonatomic) BOOL layoutExtendsContentBelowBounds; 
@required
-(BOOL)isPinching;
-(BOOL)wantsDimmedSelectionStyle;
-(void)setWantsDimmedSelectionStyle:(BOOL)arg1;
-(BOOL)lowMemoryMode;
-(void)setLowMemoryMode:(BOOL)arg1;
-(PXAssetReference *)dropTargetAssetReference;
-(NSSet *)draggedAssetReferences;
-(void)setDraggedAssetReferences:(id)arg1;
-(void)setDropTargetAssetReference:(id)arg1;
-(void)setPinchState:(SCD_Struct_PX46)arg1 withAnchorAssetReference:(id)arg2;
-(void)zoomToColumnIndex:(long long)arg1 withAnchorAssetReference:(id)arg2 animated:(BOOL)arg3;
-(void)zoomInToLastRememberedWithAnchorAssetReference:(id)arg1 animated:(BOOL)arg2;
-(void)zoomInToIndividualItemsWithAnchorAssetReference:(id)arg1 animated:(BOOL)arg2;
-(void)resetColumns;
-(void)setInteractiveZoomColumnIndex:(double)arg1 withAnchorAssetReference:(id)arg2;
-(BOOL)viewBasedDecorationsEnabled;
-(void)setViewBasedDecorationsEnabled:(BOOL)arg1;
-(BOOL)isInSelectMode;
-(void)setIsInSelectMode:(BOOL)arg1;
-(BOOL)aspectFit;
-(void)setAspectFit:(BOOL)arg1;
-(BOOL)captionsVisible;
-(void)setCaptionsVisible:(BOOL)arg1;
-(void)setIsPinching:(BOOL)arg1;
-(BOOL)isInteractiveZooming;
-(void)setIsInteractiveZooming:(BOOL)arg1;
-(BOOL)wantsOverBackgroundFloatingHeaderAppearance;
-(void)setWantsOverBackgroundFloatingHeaderAppearance:(BOOL)arg1;
-(BOOL)layoutExtendsContentBelowBounds;
-(void)setLayoutExtendsContentBelowBounds:(BOOL)arg1;

@end
