/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PXExploreParsingState : NSObject {

	BOOL _canIgnoreNextHeroSide;
	BOOL _didMoveBestItemOutOfNextShortRow;
	BOOL _didMoveBestItemOutOfPreviousShortRowIntoHeroRow;
	long long _parseLocation;
	double _buildingBlockAspectRatio;
	long long _nextRowType;
	long long _nextHeroSide;
	long long _numberOfConsecutiveMediumHeroRows;
	long long _effectiveLargeHeroDensity;
	long long _numberOfColumnsOverride;
	long long _lastHeroRowTag;

}

@property (assign,nonatomic) long long parseLocation;                                           //@synthesize parseLocation=_parseLocation - In the implementation block
@property (assign,nonatomic) double buildingBlockAspectRatio;                                   //@synthesize buildingBlockAspectRatio=_buildingBlockAspectRatio - In the implementation block
@property (assign,nonatomic) long long nextRowType;                                             //@synthesize nextRowType=_nextRowType - In the implementation block
@property (assign,nonatomic) long long nextHeroSide;                                            //@synthesize nextHeroSide=_nextHeroSide - In the implementation block
@property (nonatomic,readonly) BOOL canIgnoreNextHeroSide;                                      //@synthesize canIgnoreNextHeroSide=_canIgnoreNextHeroSide - In the implementation block
@property (assign,nonatomic) long long numberOfConsecutiveMediumHeroRows;                       //@synthesize numberOfConsecutiveMediumHeroRows=_numberOfConsecutiveMediumHeroRows - In the implementation block
@property (assign,nonatomic) long long effectiveLargeHeroDensity;                               //@synthesize effectiveLargeHeroDensity=_effectiveLargeHeroDensity - In the implementation block
@property (assign,nonatomic) long long numberOfColumnsOverride;                                 //@synthesize numberOfColumnsOverride=_numberOfColumnsOverride - In the implementation block
@property (assign,nonatomic) long long lastHeroRowTag;                                          //@synthesize lastHeroRowTag=_lastHeroRowTag - In the implementation block
@property (assign,nonatomic) BOOL didMoveBestItemOutOfNextShortRow;                             //@synthesize didMoveBestItemOutOfNextShortRow=_didMoveBestItemOutOfNextShortRow - In the implementation block
@property (assign,nonatomic) BOOL didMoveBestItemOutOfPreviousShortRowIntoHeroRow;              //@synthesize didMoveBestItemOutOfPreviousShortRowIntoHeroRow=_didMoveBestItemOutOfPreviousShortRowIntoHeroRow - In the implementation block
-(long long)parseLocation;
-(long long)numberOfConsecutiveMediumHeroRows;
-(long long)effectiveLargeHeroDensity;
-(void)setDidMoveBestItemOutOfPreviousShortRowIntoHeroRow:(BOOL)arg1 ;
-(void)setDidMoveBestItemOutOfNextShortRow:(BOOL)arg1 ;
-(void)setNumberOfConsecutiveMediumHeroRows:(long long)arg1 ;
-(void)setNextHeroSide:(long long)arg1 ;
-(long long)nextHeroSide;
-(long long)nextRowType;
-(void)setNextRowType:(long long)arg1 ;
-(void)setParseLocation:(long long)arg1 ;
-(double)buildingBlockAspectRatio;
-(void)prepareWithMetrics:(id)arg1 ;
-(void)setBuildingBlockAspectRatio:(double)arg1 ;
-(BOOL)canIgnoreNextHeroSide;
-(void)setEffectiveLargeHeroDensity:(long long)arg1 ;
-(long long)numberOfColumnsOverride;
-(void)setNumberOfColumnsOverride:(long long)arg1 ;
-(long long)lastHeroRowTag;
-(void)setLastHeroRowTag:(long long)arg1 ;
-(BOOL)didMoveBestItemOutOfNextShortRow;
-(BOOL)didMoveBestItemOutOfPreviousShortRowIntoHeroRow;
@end

