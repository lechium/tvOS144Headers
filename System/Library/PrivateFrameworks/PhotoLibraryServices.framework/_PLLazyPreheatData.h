/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSData.h>

@class NSString, NSData;

@interface _PLLazyPreheatData : NSData {

	NSString* _path;
	NSData* _data;

}
+(id)dataWithContentsOfFile:(id)arg1 ;
-(unsigned long long)length;
-(const void*)bytes;
-(id)initWithContentsOfFile:(id)arg1 ;
-(void)_loadData;
@end

