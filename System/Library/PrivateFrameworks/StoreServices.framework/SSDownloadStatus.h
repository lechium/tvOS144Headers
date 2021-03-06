/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSDownloadPhase, NSError, NSString;

@interface SSDownloadStatus : NSObject <SSXPCCoding, NSCopying> {

	SSDownloadPhase* _activePhase;
	BOOL _contentRestricted;
	NSError* _error;
	BOOL _failed;
	BOOL _paused;

}

@property (nonatomic,retain) NSError * error;                                                //@synthesize error=_error - In the implementation block
@property (assign,getter=isContentRestricted,nonatomic) BOOL contentRestricted;              //@synthesize contentRestricted=_contentRestricted - In the implementation block
@property (assign,getter=isFailed,nonatomic) BOOL failed;                                    //@synthesize failed=_failed - In the implementation block
@property (assign,getter=isPausable,nonatomic) BOOL pausable; 
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                    //@synthesize paused=_paused - In the implementation block
@property (getter=isFailedTransient,nonatomic,readonly) BOOL failedTransient; 
@property (nonatomic,readonly) SSDownloadPhase * activePhase;                                //@synthesize activePhase=_activePhase - In the implementation block
@property (nonatomic,readonly) float percentComplete; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isPaused;
-(void)setPausable:(BOOL)arg1 ;
-(BOOL)isPausable;
-(BOOL)isFailed;
-(float)percentComplete;
-(void)setOperationType:(long long)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setPercentComplete:(float)arg1 ;
-(void)setContentRestricted:(BOOL)arg1 ;
-(void)setOperationProgress:(id)arg1 ;
-(void)setFailed:(BOOL)arg1 ;
-(BOOL)isContentRestricted;
-(BOOL)isFailedTransient;
-(SSDownloadPhase *)activePhase;
@end

