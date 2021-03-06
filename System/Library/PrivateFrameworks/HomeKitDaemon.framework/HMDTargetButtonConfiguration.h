/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDTargetButtonConfiguration : HMFObject {

	unsigned char _identifier;
	long long _type;
	NSString* _name;

}

@property (nonatomic,readonly) unsigned char identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setName:(NSString *)arg1 ;
-(unsigned char)identifier;
-(id)shortDescription;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3 ;
-(id)buttonName;
@end

