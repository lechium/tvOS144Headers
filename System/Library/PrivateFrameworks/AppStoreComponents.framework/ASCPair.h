/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ASCPair : NSObject <NSCopying> {

	id _first;
	id _second;

}

@property (nonatomic,readonly) id first;               //@synthesize first=_first - In the implementation block
@property (nonatomic,readonly) id second;              //@synthesize second=_second - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)second;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
-(id)first;
@end

