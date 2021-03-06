/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <JetEngine/JetEngine-Structs.h>
@interface JEBrotliDecoder : NSObject {

	BrotliDecoderStateStructRef _decoder;

}

@property (nonatomic,readonly) BrotliDecoderStateStructRef decoder;              //@synthesize decoder=_decoder - In the implementation block
-(id)init;
-(void)dealloc;
-(BrotliDecoderStateStructRef)decoder;
-(long long)decompressStreamWithAvailableIn:(unsigned long long*)arg1 nextIn:(const char**)arg2 availableOut:(unsigned long long*)arg3 nextOut:(char**)arg4 ;
@end

