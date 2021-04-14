/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SimDevice, NSString;

@interface OSLogDevice : NSObject {

	long long _devType;
	void* _mobDev;
	SimDevice* _simDev;
	NSString* _uid;

}

@property (assign,nonatomic) long long devType;               //@synthesize devType=_devType - In the implementation block
@property (assign,nonatomic) void* mobDev;                    //@synthesize mobDev=_mobDev - In the implementation block
@property (nonatomic,retain) SimDevice * simDev;              //@synthesize simDev=_simDev - In the implementation block
@property (nonatomic,retain) NSString * uid;                  //@synthesize uid=_uid - In the implementation block
-(id)description;
-(id)init;
-(void)setUid:(NSString *)arg1 ;
-(NSString *)uid;
-(id)initWithMobileDevice:(void*)arg1 andID:(id)arg2 ;
-(id)initWithSimualatedDevice:(id)arg1 ;
-(long long)devType;
-(void)setDevType:(long long)arg1 ;
-(void*)mobDev;
-(void)setMobDev:(void*)arg1 ;
-(SimDevice *)simDev;
-(void)setSimDev:(SimDevice *)arg1 ;
@end

