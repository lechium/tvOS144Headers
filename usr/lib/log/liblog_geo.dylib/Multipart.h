/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/log/liblog_geo.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <liblog_geo.dylib/liblog_geo.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface Multipart : NSObject <NSCopying> {

	unsigned long long identifier;
	unsigned char partIndex;
	unsigned char partCount;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToMultipart:(id)arg1 ;
-(id)copyWithIndex:(unsigned char)arg1 ;
@end

