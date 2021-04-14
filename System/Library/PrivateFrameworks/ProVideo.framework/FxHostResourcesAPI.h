/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FxHostResourcesAPI
@required
-(void*)allocateMemory:(unsigned long long)arg1 clear:(BOOL)arg2 clearWith:(unsigned char)arg3 error:(id*)arg4;
-(void)freeMemory:(void*)arg1 error:(id*)arg2;
-(void)trackExternalAllocation:(unsigned long long)arg1;
-(void)createTexture:(id*)arg1 withDOD:(FxRect)arg2 GLTarget:(unsigned)arg3 level:(int)arg4 internalFormat:(unsigned)arg5 width:(int)arg6 height:(int)arg7 border:(int)arg8 format:(unsigned)arg9 type:(unsigned)arg10 pixels:(const void*)arg11 origin:(unsigned long long)arg12 pixelAspectRatio:(double)arg13 andError:(id*)arg14;
-(void)deleteTexture:(id)arg1 error:(id*)arg2;
-(void)createPBuffer:(unsigned*)arg1 withTarget:(unsigned)arg2 error:(id*)arg3;
-(void)deletePBuffer:(unsigned)arg1 error:(id*)arg2;
-(unsigned long long)numberOfCores;
-(void)performSelector:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 onThreads:(long long)arg4 waitUntilDone:(BOOL)arg5 error:(id*)arg6;

@end

