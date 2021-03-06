/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface MTMetricsDataPredicate : NSObject {

	NSDictionary* _fieldPredicates;

}

@property (nonatomic,retain) NSDictionary * fieldPredicates;              //@synthesize fieldPredicates=_fieldPredicates - In the implementation block
+(id)predicateWithType:(id)arg1 argument:(id)arg2 ;
+(id)predicateWithConfigData:(id)arg1 ;
-(id)initWithFormat:(id)arg1 ;
-(id)initWithConfigDictionary:(id)arg1 ;
-(void)setFieldPredicates:(NSDictionary *)arg1 ;
-(NSDictionary *)fieldPredicates;
-(BOOL)evaluateWithMetricsData:(id)arg1 ;
@end

