/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUIDynamic.framework/AppleMediaServicesUIDynamic
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, AMSUIDDynamicImpressionMetricsIdentifier;

@interface AMSUIDDynamicImpressionMetrics : NSObject {

	 custom;
	 fields;
	 identifier;

}

@property (copy,nonatomic) NSDictionary * custom; 
@property (copy,nonatomic) NSDictionary * fields; 
@property (retain,nonatomic) AMSUIDDynamicImpressionMetricsIdentifier * identifier; 
-(id)init;
-(AMSUIDDynamicImpressionMetricsIdentifier *)identifier;
-(NSDictionary *)fields;
-(void)setIdentifier:(AMSUIDDynamicImpressionMetricsIdentifier *)arg1 ;
-(NSDictionary *)custom;
-(void)setCustom:(NSDictionary *)arg1 ;
-(void)setFields:(NSDictionary *)arg1 ;
-(id)initWithIdentifier:(id)arg1 fields:(id)arg2 custom:(id)arg3 ;
@end

