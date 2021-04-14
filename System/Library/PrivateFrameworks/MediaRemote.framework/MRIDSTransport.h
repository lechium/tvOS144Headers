/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRExternalDeviceTransport.h>

@class MRIDSInputStream, MRIDSOutputStream, MRAVOutputDevice;

@interface MRIDSTransport : MRExternalDeviceTransport {

	MRIDSInputStream* _inputStream;
	MRIDSOutputStream* _outputStream;
	MRAVOutputDevice* _outputDevice;

}
-(id)name;
-(long long)port;
-(id)error;
-(void)reset;
-(id)hostname;
-(id)uid;
-(id)deviceInfo;
-(id)initWithOutputDevice:(id)arg1 ;
-(BOOL)shouldUseSystemAuthenticationPrompt;
-(void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg1 ;
-(BOOL)getInputStream:(id*)arg1 outputStream:(id*)arg2 userInfo:(id)arg3 ;
-(void)_handleDeviceDisconnected:(id)arg1 ;
@end

