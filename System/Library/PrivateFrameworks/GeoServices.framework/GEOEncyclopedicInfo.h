/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray, GEOMapItemAttribution;


@protocol GEOEncyclopedicInfo <NSObject>
@property (nonatomic,readonly) BOOL hasTextBlock; 
@property (nonatomic,readonly) NSString * textBlockTitle; 
@property (nonatomic,readonly) NSString * textBlockText; 
@property (nonatomic,readonly) BOOL hasPairOfFactoids; 
@property (nonatomic,readonly) NSArray * factoids; 
@property (nonatomic,readonly) BOOL hasStandAloneFactoids; 
@property (nonatomic,readonly) GEOMapItemAttribution * encyclopedicAttribution; 
@required
-(NSString *)textBlockText;
-(BOOL)hasTextBlock;
-(NSString *)textBlockTitle;
-(BOOL)hasPairOfFactoids;
-(NSArray *)factoids;
-(BOOL)hasStandAloneFactoids;
-(GEOMapItemAttribution *)encyclopedicAttribution;

@end
