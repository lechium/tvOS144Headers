/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOPDModuleLayoutEntry, NSString, NSArray;

@interface GEOModuleLayoutEntry : NSObject {

	GEOPDModuleLayoutEntry* _moduleLayoutEntry;

}

@property (nonatomic,readonly) NSString * debugName; 
@property (nonatomic,readonly) NSArray * modules; 
+(id)moduleLayoutEntryFromArray:(id)arg1 ;
-(NSString *)debugName;
-(id)initWithModuleLayoutEntry:(id)arg1 ;
-(NSArray *)modules;
@end

