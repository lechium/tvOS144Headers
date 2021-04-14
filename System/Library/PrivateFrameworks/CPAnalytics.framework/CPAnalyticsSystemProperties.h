/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface CPAnalyticsSystemProperties : NSObject {

	NSMutableDictionary* _systemProperties;
	NSMutableDictionary* _dynamicProperties;

}

@property (nonatomic,retain) NSMutableDictionary * systemProperties;               //@synthesize systemProperties=_systemProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dynamicProperties;              //@synthesize dynamicProperties=_dynamicProperties - In the implementation block
+(id)dynamicPhotoLibraryProperties;
+(id)staticPhotoLibraryProperties;
-(id)init;
-(void)addProperty:(id)arg1 withValue:(id)arg2 ;
-(void)addDynamicProperty:(id)arg1 withProvider:(id)arg2 ;
-(NSMutableDictionary *)dynamicProperties;
-(NSMutableDictionary *)systemProperties;
-(id)propertyForKey:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3 ;
-(void)removePhotoLibraryProperties;
-(void)setSystemProperties:(NSMutableDictionary *)arg1 ;
-(void)setDynamicProperties:(NSMutableDictionary *)arg1 ;
@end

