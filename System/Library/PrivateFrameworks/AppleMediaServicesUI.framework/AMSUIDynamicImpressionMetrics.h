/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, AMSUIDynamicImpressionMetricsIdentifier;

@interface AMSUIDynamicImpressionMetrics : NSObject {

	NSDictionary* _custom;
	NSDictionary* _fields;
	AMSUIDynamicImpressionMetricsIdentifier* _identifier;

}

@property (nonatomic,retain) NSDictionary * custom;                                             //@synthesize custom=_custom - In the implementation block
@property (nonatomic,retain) NSDictionary * fields;                                             //@synthesize fields=_fields - In the implementation block
@property (nonatomic,retain) AMSUIDynamicImpressionMetricsIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(AMSUIDynamicImpressionMetricsIdentifier *)identifier;
-(NSDictionary *)fields;
-(void)setIdentifier:(AMSUIDynamicImpressionMetricsIdentifier *)arg1 ;
-(NSDictionary *)custom;
-(void)setCustom:(NSDictionary *)arg1 ;
-(void)setFields:(NSDictionary *)arg1 ;
-(id)initWithIdentifier:(id)arg1 fields:(id)arg2 custom:(id)arg3 ;
@end

