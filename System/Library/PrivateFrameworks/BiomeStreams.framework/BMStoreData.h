/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BMStoreData <NSObject>
@property (nonatomic,readonly) unsigned dataVersion; 
@optional
-(id)json;

@required
+(id)eventWithData:(id)arg1 dataVersion:(unsigned)arg2;
-(id)init;
-(unsigned)dataVersion;
-(id)serialize;

@end

