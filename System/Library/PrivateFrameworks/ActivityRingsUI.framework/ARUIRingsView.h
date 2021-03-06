/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ARUIRingGroupDelegate.h>

@class ARUIRenderContext, NSArray, ARUIRenderer, UIImage, ARUIRingGroup, CAMetalLayer, ARUIRingGroupController, NSString;

@interface ARUIRingsView : UIView <ARUIRingGroupDelegate> {

	ARUIRenderContext* _renderContext;
	BOOL _backgrounded;
	BOOL _inViewHierarchy;
	NSArray* _ringGroups;
	NSArray* _ringGroupControllers;
	BOOL _shouldBypassApplicationStateChecking;
	BOOL _discardBackBuffers;
	BOOL _shouldRenderOnLayout;
	BOOL _viewIsVisible;
	BOOL _paused;
	ARUIRenderer* _renderer;
	long long _preferredFramesPerSecond;
	double _emptyRingAlpha;
	unsigned long long _iconTextureRows;
	unsigned long long _iconTextureColumns;
	UIImage* _iconSpriteImage;

}

@property (nonatomic,readonly) ARUIRingGroup * ringGroup; 
@property (nonatomic,readonly) ARUIRenderer * renderer;                                    //@synthesize renderer=_renderer - In the implementation block
@property (assign,nonatomic) BOOL shouldBypassApplicationStateChecking;                    //@synthesize shouldBypassApplicationStateChecking=_shouldBypassApplicationStateChecking - In the implementation block
@property (assign,nonatomic) BOOL discardBackBuffers;                                      //@synthesize discardBackBuffers=_discardBackBuffers - In the implementation block
@property (nonatomic,readonly) CAMetalLayer * metalLayer; 
@property (nonatomic,readonly) UIImage * snapshot; 
@property (nonatomic,readonly) ARUIRingGroupController * ringGroupController; 
@property (nonatomic,readonly) NSArray * ringGroupControllers; 
@property (assign,nonatomic) BOOL shouldRenderOnLayout;                                    //@synthesize shouldRenderOnLayout=_shouldRenderOnLayout - In the implementation block
@property (assign,nonatomic) long long preferredFramesPerSecond;                           //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
@property (nonatomic,readonly) BOOL viewIsVisible;                                         //@synthesize viewIsVisible=_viewIsVisible - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                  //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) BOOL synchronizesWithCA; 
@property (assign,nonatomic) double emptyRingAlpha;                                        //@synthesize emptyRingAlpha=_emptyRingAlpha - In the implementation block
@property (assign,nonatomic) unsigned long long iconTextureRows;                           //@synthesize iconTextureRows=_iconTextureRows - In the implementation block
@property (assign,nonatomic) unsigned long long iconTextureColumns;                        //@synthesize iconTextureColumns=_iconTextureColumns - In the implementation block
@property (nonatomic,retain) UIImage * iconSpriteImage;                                    //@synthesize iconSpriteImage=_iconSpriteImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
+(void)clearSharedCaches;
+(id)ringsViewConfiguredForWatchOfType:(long long)arg1 withIcon:(BOOL)arg2 renderer:(id)arg3 ;
+(id)ringsViewConfiguredForCompanionOfType:(long long)arg1 withRenderer:(id)arg2 ;
+(id)ringsViewConfiguredForThreeRingsOnWatch;
+(id)ringsViewConfiguredForThreeRingsOnWatchWithRenderer:(id)arg1 ;
+(id)ringsViewConfiguredForOneRingOnWatchOfType:(long long)arg1 ;
+(id)ringsViewConfiguredForOneRingOnWatchOfType:(long long)arg1 withRenderer:(id)arg2 ;
+(id)ringsViewConfiguredForOneRingOnWatchOfType:(long long)arg1 withIcon:(BOOL)arg2 ;
+(id)ringsViewConfiguredForThreeRingsOnCompanion;
+(id)ringsViewConfiguredForThreeRingsOnCompanionWithRenderer:(id)arg1 ;
+(id)ringsViewConfiguredForOneRingOnCompanionOfType:(long long)arg1 ;
-(BOOL)isPaused;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(UIImage *)snapshot;
-(void)setPaused:(BOOL)arg1 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(long long)preferredFramesPerSecond;
-(void)setBounds:(CGRect)arg1 ;
-(ARUIRenderer *)renderer;
-(void)layoutSubviews;
-(BOOL)viewIsVisible;
-(void)setContentMode:(long long)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(CAMetalLayer *)metalLayer;
-(void)_didEnterBackground:(id)arg1 ;
-(void)_willEnterForeground:(id)arg1 ;
-(ARUIRingGroup *)ringGroup;
-(void)ringGroupHasUpdated:(id)arg1 ;
-(id)initWithRingGroup:(id)arg1 ;
-(void)_sharedInitWithWithRingGroupControllers:(id)arg1 renderer:(id)arg2 ;
-(void)_sharedInitWithRingGroups:(id)arg1 renderer:(id)arg2 ;
-(void)_updateRenderContext;
-(BOOL)_shouldAllowRendering;
-(void)_discardBackBuffers;
-(id)_allRings;
-(id)_anySpriteSheet;
-(void)_updateRingGroupPauseState;
-(id)initWithRingGroupController:(id)arg1 ;
-(id)initWithRingGroupController:(id)arg1 renderer:(id)arg2 ;
-(id)initWithRingGroupControllers:(id)arg1 ;
-(id)initWithRingGroupControllers:(id)arg1 renderer:(id)arg2 ;
-(ARUIRingGroupController *)ringGroupController;
-(NSArray *)ringGroupControllers;
-(id)initWithRingGroup:(id)arg1 renderer:(id)arg2 ;
-(id)initWithRingGroups:(id)arg1 ;
-(id)initWithRingGroups:(id)arg1 renderer:(id)arg2 ;
-(id)ringGroups;
-(void)setSynchronizesWithCA:(BOOL)arg1 ;
-(BOOL)synchronizesWithCA;
-(BOOL)shouldBypassApplicationStateChecking;
-(void)setShouldBypassApplicationStateChecking:(BOOL)arg1 ;
-(BOOL)discardBackBuffers;
-(void)setDiscardBackBuffers:(BOOL)arg1 ;
-(BOOL)shouldRenderOnLayout;
-(void)setShouldRenderOnLayout:(BOOL)arg1 ;
-(double)emptyRingAlpha;
-(void)setEmptyRingAlpha:(double)arg1 ;
-(unsigned long long)iconTextureRows;
-(void)setIconTextureRows:(unsigned long long)arg1 ;
-(unsigned long long)iconTextureColumns;
-(void)setIconTextureColumns:(unsigned long long)arg1 ;
-(UIImage *)iconSpriteImage;
-(void)setIconSpriteImage:(UIImage *)arg1 ;
-(void)setActiveEnergyPercentage:(double)arg1 animated:(BOOL)arg2 ;
-(void)setBriskPercentage:(double)arg1 animated:(BOOL)arg2 ;
-(void)setMovingHoursPercentage:(double)arg1 animated:(BOOL)arg2 ;
-(void)setActiveEnergyPercentage:(double)arg1 briskPercentage:(double)arg2 movingHoursPercentage:(double)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
@end

