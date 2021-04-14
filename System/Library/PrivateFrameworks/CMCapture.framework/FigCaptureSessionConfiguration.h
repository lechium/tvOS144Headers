/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSArray;

@interface FigCaptureSessionConfiguration : NSObject <FigXPCCoding, NSCopying> {

	NSMutableArray* _connections;
	long long _configurationID;
	NSString* _sessionPreset;
	BOOL _usesAppAudioSession;
	BOOL _configuresAppAudioSession;
	BOOL _allowedToRunInWindowedLayout;
	BOOL _isMultiCamSession;
	BOOL _xctestAuthorizedToStealDevice;

}

@property (assign,nonatomic) long long configurationID;                                  //@synthesize configurationID=_configurationID - In the implementation block
@property (nonatomic,readonly) NSArray * connectionConfigurations; 
@property (nonatomic,readonly) NSArray * sourceConfigurations; 
@property (nonatomic,readonly) NSArray * sinkConfigurations; 
@property (nonatomic,retain) NSString * sessionPreset;                                   //@synthesize sessionPreset=_sessionPreset - In the implementation block
@property (assign,nonatomic) BOOL usesAppAudioSession;                                   //@synthesize usesAppAudioSession=_usesAppAudioSession - In the implementation block
@property (assign,nonatomic) BOOL configuresAppAudioSession;                             //@synthesize configuresAppAudioSession=_configuresAppAudioSession - In the implementation block
@property (assign,nonatomic) BOOL allowedToRunInWindowedLayout;                          //@synthesize allowedToRunInWindowedLayout=_allowedToRunInWindowedLayout - In the implementation block
@property (assign,getter=isMultiCamSession,nonatomic) BOOL multiCamSession;              //@synthesize isMultiCamSession=_isMultiCamSession - In the implementation block
@property (assign,nonatomic) BOOL xctestAuthorizedToStealDevice;                         //@synthesize xctestAuthorizedToStealDevice=_xctestAuthorizedToStealDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)setConfigurationID:(long long)arg1 ;
-(long long)configurationID;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)sessionPreset;
-(void)setSessionPreset:(NSString *)arg1 ;
-(void)setUsesAppAudioSession:(BOOL)arg1 ;
-(void)setConfiguresAppAudioSession:(BOOL)arg1 ;
-(void)setAllowedToRunInWindowedLayout:(BOOL)arg1 ;
-(void)addConnectionConfiguration:(id)arg1 ;
-(BOOL)isMultiCamSession;
-(NSArray *)connectionConfigurations;
-(NSArray *)sourceConfigurations;
-(BOOL)xctestAuthorizedToStealDevice;
-(BOOL)usesAppAudioSession;
-(BOOL)configuresAppAudioSession;
-(BOOL)allowedToRunInWindowedLayout;
-(NSArray *)sinkConfigurations;
-(void)setMultiCamSession:(BOOL)arg1 ;
-(void)setXctestAuthorizedToStealDevice:(BOOL)arg1 ;
-(void)removeConnectionConfiguration:(id)arg1 ;
@end

