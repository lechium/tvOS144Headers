/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class DHKey, NGMPublicPreKey;

@interface NGMFullPrekey : NSObject {

	DHKey* _dhKey;
	NGMPublicPreKey* _publicPrekey;

}

@property (nonatomic,readonly) DHKey * dhKey;                               //@synthesize dhKey=_dhKey - In the implementation block
@property (nonatomic,readonly) NGMPublicPreKey * publicPrekey;              //@synthesize publicPrekey=_publicPrekey - In the implementation block
-(id)description;
-(BOOL)delete;
-(DHKey *)dhKey;
-(NGMPublicPreKey *)publicPrekey;
-(id)initWithPrekeySignedBy:(id)arg1 error:(id*)arg2 ;
-(id)initWithPBPrekey:(id)arg1 error:(id*)arg2 ;
-(id)pbDevicePrekey;
@end

