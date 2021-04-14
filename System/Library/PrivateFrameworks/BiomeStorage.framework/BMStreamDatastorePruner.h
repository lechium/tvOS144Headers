/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BMStreamDatastore, BMStreamsAccessClient;

@interface BMStreamDatastorePruner : NSObject {

	BMStreamDatastore* _inner;
	BMStreamsAccessClient* _accessClient;

}
-(void)dealloc;
-(Class)eventClass;
-(id)newEnumeratorFromStartTime:(double)arg1 ;
-(void)syncMappedFiles;
-(id)fetchEventsFrom:(double)arg1 to:(double)arg2 ;
-(void)eventsFrom:(double)arg1 to:(double)arg2 shouldDeleteUsingBlock:(/*^block*/id)arg3 ;
-(id)newEnumeratorFromBookmark:(id)arg1 ;
-(id)initWithStream:(id)arg1 config:(id)arg2 ;
-(id)streamIdentifier;
-(void)removeEventsFrom:(double)arg1 to:(double)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)removeEventsFrom:(double)arg1 to:(double)arg2 callback:(/*^block*/id)arg3 ;
@end

