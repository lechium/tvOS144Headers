/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _PASTempfileDescr : NSObject <NSCopying> {

	int _fd;
	NSString* _path;

}

@property (nonatomic,readonly) int fd;                       //@synthesize fd=_fd - In the implementation block
@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
+(id)tempfileDescrWithFd:(int)arg1 path:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)path;
-(int)fd;
-(id)initWithFd:(int)arg1 path:(id)arg2 ;
-(BOOL)isEqualToTempfileDescr:(id)arg1 ;
@end

