/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BMSourceStream.h>
#import <libobjc.A.dylib/BMStream.h>

@class BMStoreStream, NSString;

@interface BMContextualActionsStream : NSObject <BMSourceStream, BMStream> {

	BMStoreStream* _storeStream;

}

@property (nonatomic,readonly) NSString * identifier; 
-(id)init;
-(NSString *)identifier;
-(id)source;
-(id)publisherFromStartTime:(double)arg1 ;
@end

