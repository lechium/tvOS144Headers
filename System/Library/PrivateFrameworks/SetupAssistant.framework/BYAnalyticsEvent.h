/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface BYAnalyticsEvent : NSObject {

	BOOL _persist;
	NSString* _name;
	NSDictionary* _payload;

}

@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) BOOL persist;                        //@synthesize persist=_persist - In the implementation block
+(id)eventWithName:(id)arg1 withPayload:(id)arg2 persist:(BOOL)arg3 ;
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSDictionary *)payload;
-(void)setPayload:(NSDictionary *)arg1 ;
-(BOOL)persist;
-(void)setPersist:(BOOL)arg1 ;
@end

