/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableDictionary;

@interface MRExternalDeviceMessageMetrics : NSObject {

	NSString* _path;
	NSMutableDictionary* _entries;

}
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(void)write;
-(void)addMessage:(id)arg1 data:(id)arg2 ;
@end

