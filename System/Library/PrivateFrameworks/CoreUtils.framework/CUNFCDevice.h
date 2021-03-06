/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSUUID;

@interface CUNFCDevice : NSObject {

	NSURL* _advertisedURI;
	NSUUID* _identifier;

}

@property (nonatomic,copy) NSURL * advertisedURI;              //@synthesize advertisedURI=_advertisedURI - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                //@synthesize identifier=_identifier - In the implementation block
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSURL *)advertisedURI;
-(void)setAdvertisedURI:(NSURL *)arg1 ;
@end

