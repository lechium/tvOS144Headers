/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PXNewMagazineRectArray, NSArray, NSMutableArray;

@interface PXNewMagazineLayoutCoordinator : NSObject {

	PXNewMagazineRectArray* _fallbackLayout;
	double _currentBestScore;
	BOOL _stopIfAnyGoodLayout;
	BOOL _stop;
	NSArray* _paddingInputs;
	double _tileAspectRatio;
	NSMutableArray* _qualifiedLayouts;
	PXNewMagazineRectArray* _currentLayout;
	unsigned long long _currentIndex;

}

@property (nonatomic,readonly) NSArray * paddingInputs;                                 //@synthesize paddingInputs=_paddingInputs - In the implementation block
@property (nonatomic,readonly) double tileAspectRatio;                                  //@synthesize tileAspectRatio=_tileAspectRatio - In the implementation block
@property (nonatomic,readonly) BOOL stopIfAnyGoodLayout;                                //@synthesize stopIfAnyGoodLayout=_stopIfAnyGoodLayout - In the implementation block
@property (nonatomic,readonly) unsigned long long currentLayoutsCount; 
@property (nonatomic,readonly) PXNewMagazineRectArray * currentBestLayout; 
@property (nonatomic,retain) NSMutableArray * qualifiedLayouts;                         //@synthesize qualifiedLayouts=_qualifiedLayouts - In the implementation block
@property (nonatomic,retain) PXNewMagazineRectArray * currentLayout;                    //@synthesize currentLayout=_currentLayout - In the implementation block
@property (assign,nonatomic) unsigned long long currentIndex;                           //@synthesize currentIndex=_currentIndex - In the implementation block
@property (assign,nonatomic) BOOL stop;                                                 //@synthesize stop=_stop - In the implementation block
-(BOOL)stop;
-(PXNewMagazineRectArray *)currentLayout;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
-(unsigned long long)currentIndex;
-(id)initWithPaddingInputs:(id)arg1 tileGrid:(id)arg2 tileAspectRatio:(double)arg3 stopIfAnyGoodLayout:(BOOL)arg4 ;
-(BOOL)validateCurrentLayout;
-(void)validateCurrentLayoutAsFallback;
-(double)scoreOfLayout:(id)arg1 ;
-(unsigned long long)currentLayoutsCount;
-(PXNewMagazineRectArray *)currentBestLayout;
-(NSArray *)paddingInputs;
-(double)tileAspectRatio;
-(BOOL)stopIfAnyGoodLayout;
-(NSMutableArray *)qualifiedLayouts;
-(void)setQualifiedLayouts:(NSMutableArray *)arg1 ;
-(void)setCurrentLayout:(PXNewMagazineRectArray *)arg1 ;
-(void)setStop:(BOOL)arg1 ;
@end

