/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFAudio/AVFAudio-Structs.h>
@class NSURL, AVAudioFormat;

@interface AVAudioFile : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) AVAudioFormat * fileFormat; 
@property (nonatomic,readonly) AVAudioFormat * processingFormat; 
@property (nonatomic,readonly) long long length; 
@property (assign,nonatomic) long long framePosition; 
-(void)dealloc;
-(long long)length;
-(NSURL *)url;
-(id)initForReading:(id)arg1 error:(id*)arg2 ;
-(id)initForReading:(id)arg1 commonFormat:(unsigned long long)arg2 interleaved:(BOOL)arg3 error:(id*)arg4 ;
-(id)initForReadingFromExtAudioFile:(OpaqueExtAudioFileRef)arg1 error:(id*)arg2 ;
-(id)initForReadingFromExtAudioFile:(OpaqueExtAudioFileRef)arg1 commonFormat:(unsigned long long)arg2 interleaved:(BOOL)arg3 error:(id*)arg4 ;
-(id)initForWriting:(id)arg1 settings:(id)arg2 error:(id*)arg3 ;
-(id)initForWriting:(id)arg1 settings:(id)arg2 commonFormat:(unsigned long long)arg3 interleaved:(BOOL)arg4 error:(id*)arg5 ;
-(id)initSecondaryReader:(id)arg1 format:(id)arg2 error:(id*)arg3 ;
-(BOOL)readIntoBuffer:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeFromBuffer:(id)arg1 error:(id*)arg2 ;
-(BOOL)readIntoBuffer:(id)arg1 frameCount:(unsigned)arg2 error:(id*)arg3 ;
-(AVAudioFormat *)fileFormat;
-(AVAudioFormat *)processingFormat;
-(long long)framePosition;
-(void)setFramePosition:(long long)arg1 ;
@end

