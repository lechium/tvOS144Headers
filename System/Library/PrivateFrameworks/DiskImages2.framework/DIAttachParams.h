/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiskImages2/DIBaseParams.h>

@class NSURL;

@interface DIAttachParams : DIBaseParams {

	BOOL _autoMount;
	BOOL _handleRefCount;
	long long _fileMode;
	unsigned long long _concurrency;
	unsigned long long _commandSize;
	unsigned long long _regEntryID;
	NSURL* _inputMountedOnURL;

}

@property (assign,nonatomic) unsigned long long concurrency;               //@synthesize concurrency=_concurrency - In the implementation block
@property (assign,nonatomic) unsigned long long commandSize;               //@synthesize commandSize=_commandSize - In the implementation block
@property (assign,nonatomic) unsigned long long regEntryID;                //@synthesize regEntryID=_regEntryID - In the implementation block
@property (assign,nonatomic) BOOL handleRefCount;                          //@synthesize handleRefCount=_handleRefCount - In the implementation block
@property (nonatomic,retain) NSURL * inputMountedOnURL;                    //@synthesize inputMountedOnURL=_inputMountedOnURL - In the implementation block
@property (assign) BOOL autoMount;                                         //@synthesize autoMount=_autoMount - In the implementation block
@property (assign,nonatomic) long long fileMode;                           //@synthesize fileMode=_fileMode - In the implementation block
@property (assign,nonatomic) unsigned long long rawBlockSize; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(void)setHandleRefCount:(BOOL)arg1 ;
-(id)newAttachWithError:(id*)arg1 ;
-(unsigned long long)regEntryID;
-(BOOL)handleRefCount;
-(BOOL)autoMount;
-(unsigned long long)concurrency;
-(unsigned long long)commandSize;
-(NSURL *)inputMountedOnURL;
-(long long)fileMode;
-(void)setFileMode:(long long)arg1 ;
-(BOOL)reOpenIfWritableWithError:(id*)arg1 ;
-(void)setAutoMount:(BOOL)arg1 ;
-(void)setConcurrency:(unsigned long long)arg1 ;
-(void)setCommandSize:(unsigned long long)arg1 ;
-(void)setRegEntryID:(unsigned long long)arg1 ;
-(void)setInputMountedOnURL:(NSURL *)arg1 ;
@end

