/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SFAuthenticateAccountInfo : NSObject {

	unsigned _type;
	NSString* _altDSID;

}

@property (nonatomic,readonly) unsigned type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * altDSID;              //@synthesize altDSID=_altDSID - In the implementation block
-(id)description;
-(unsigned)type;
-(NSString *)altDSID;
-(id)initWithType:(unsigned)arg1 altDSID:(id)arg2 ;
@end
