/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TIPreferencesController.h>

@class NSXPCConnection, NSString;

@interface TIPreferencesControllerClient : TIPreferencesController {

	NSXPCConnection* _connection;
	BOOL _writeable;
	BOOL _isValid;
	NSString* _machName;

}

@property (nonatomic,retain) NSString * machName;              //@synthesize machName=_machName - In the implementation block
@property (assign,nonatomic) BOOL isValid;                     //@synthesize isValid=_isValid - In the implementation block
+(id)sharedPreferencesController;
+(id)serviceInterface;
-(void)forwardInvocation:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isValid;
-(void)_pushValue:(id)arg1 toPreference:(id)arg2 domain:(id)arg3 ;
-(void)performWithWriteability:(BOOL)arg1 operations:(/*^block*/id)arg2 ;
-(void)updateInputModes:(id)arg1 ;
-(void)_disconnect;
-(void)createConnectionIfNecessary;
-(NSString *)machName;
-(void)setMachName:(NSString *)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
@end

