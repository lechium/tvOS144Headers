/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface _PASDatabaseJournalFile : NSObject {

	NSString* _path;
	unsigned long long _len;
	unsigned long long _readCursor;
	int _fd;
	BOOL _written;
	BOOL _dead;

}

@property (nonatomic,readonly) BOOL isFullyRead; 
@property (nonatomic,readonly) BOOL isAlive; 
@property (nonatomic,readonly) unsigned long long length; 
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(id)initWithPath:(id)arg1 ;
-(void)clear;
-(void)destroy;
-(void)write:(id)arg1 ;
-(id)read;
-(void)destroyAndUnlinkIfEmpty;
-(BOOL)isFullyRead;
-(BOOL)isAlive;
-(void)unlink;
@end

