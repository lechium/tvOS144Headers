/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSSet;


@protocol REHistoricSectionDescriptorProperties <REExportedInterface>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL invertsRanking; 
@property (nonatomic,readonly) long long maxElementCount; 
@property (nonatomic,readonly) NSSet * rules; 
@required
-(NSString *)name;
-(NSSet *)rules;
-(long long)maxElementCount;
-(BOOL)invertsRanking;

@end
