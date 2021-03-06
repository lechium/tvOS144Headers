/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSKeyedArchiver;

@interface HMDXPCKeyedArchiver : HMFObject {

	NSKeyedArchiver* _archiver;

}

@property (nonatomic,readonly) NSKeyedArchiver * archiver;              //@synthesize archiver=_archiver - In the implementation block
-(void)dealloc;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(id)encodedData;
-(void)finishEncoding;
-(void)_configure;
-(NSKeyedArchiver *)archiver;
-(id)initForWritingWithMessage:(id)arg1 ;
@end

