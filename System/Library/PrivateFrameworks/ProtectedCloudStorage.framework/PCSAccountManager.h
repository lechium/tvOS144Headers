/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PCSAccountManager : NSObject {

	NSString* _dsid;

}

@property (retain) NSString * dsid;              //@synthesize dsid=_dsid - In the implementation block
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(unsigned long long)accountStatus;
-(id)initWithDSID:(id)arg1 ;
@end

