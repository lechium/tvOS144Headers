/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFRequestQueueResponseConsumer.h>
#import <libobjc.A.dylib/DAMailAccountStreamConsumerFactory.h>

@protocol MFDAStreamingContentConsumer;
@class MFError, NSData, NSString;

@interface _MFDAMessageBodyFetchConsumer : NSObject <MFRequestQueueResponseConsumer, DAMailAccountStreamConsumerFactory> {

	id<MFDAStreamingContentConsumer> _streamConsumer;
	BOOL _succeeded;
	MFError* _error;
	NSData* _data;
	BOOL _hasLocalCopyOfData;

}

@property (nonatomic,retain) id<MFDAStreamingContentConsumer> streamConsumer;              //@synthesize streamConsumer=_streamConsumer - In the implementation block
@property (nonatomic,readonly) BOOL succeeded;                                             //@synthesize succeeded=_succeeded - In the implementation block
@property (nonatomic,retain) MFError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSData * data;                                                //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) BOOL hasLocalCopyOfData;                                      //@synthesize hasLocalCopyOfData=_hasLocalCopyOfData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSData *)data;
-(MFError *)error;
-(void)setError:(MFError *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(BOOL)succeeded;
-(void)handleResponse:(id)arg1 error:(id)arg2 ;
-(void)setStreamConsumer:(id<MFDAStreamingContentConsumer>)arg1 ;
-(BOOL)hasLocalCopyOfData;
-(BOOL)wantsData;
-(void)setHasLocalCopyOfData:(BOOL)arg1 ;
-(id<MFDAStreamingContentConsumer>)streamConsumer;
-(id)streamingContentConsumer;
@end

