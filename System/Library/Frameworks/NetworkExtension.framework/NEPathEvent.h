/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface NEPathEvent : NSObject {

	long long _type;
	NSString* _bundleID;

}

@property (readonly) long long type;                   //@synthesize type=_type - In the implementation block
@property (readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
-(long long)type;
-(NSString *)bundleID;
-(id)initWithType:(long long)arg1 bundleID:(id)arg2 ;
@end

