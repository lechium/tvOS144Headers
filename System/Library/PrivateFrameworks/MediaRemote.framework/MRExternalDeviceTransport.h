/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, MRDeviceInfo, NSError;

@interface MRExternalDeviceTransport : NSObject {

	long long _connectionType;
	BOOL _requiresCustomPairing;
	NSString* _uid;

}

@property (nonatomic,readonly) MRDeviceInfo * deviceInfo; 
@property (nonatomic,readonly) NSString * uid;                                      //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * hostname; 
@property (nonatomic,readonly) long long port; 
@property (nonatomic,readonly) BOOL requiresCustomPairing;                          //@synthesize requiresCustomPairing=_requiresCustomPairing - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSystemAuthenticationPrompt; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) long long connectionType;                            //@synthesize connectionType=_connectionType - In the implementation block
-(NSString *)name;
-(long long)port;
-(NSError *)error;
-(void)reset;
-(NSString *)hostname;
-(long long)connectionType;
-(NSString *)uid;
-(MRDeviceInfo *)deviceInfo;
-(BOOL)shouldUseSystemAuthenticationPrompt;
-(void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg1 ;
-(BOOL)getInputStream:(id*)arg1 outputStream:(id*)arg2 userInfo:(id)arg3 ;
-(BOOL)requiresCustomPairing;
@end

