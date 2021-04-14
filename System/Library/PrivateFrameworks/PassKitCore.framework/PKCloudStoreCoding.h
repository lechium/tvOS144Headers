/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKCloudStoreCoding <NSSecureCoding>
@optional
-(void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;

@required
+(id)recordNamePrefix;
-(unsigned long long)itemType;
-(id)primaryIdentifier;
-(void)encodeWithCloudStoreCoder:(id)arg1;
-(id)initWithCloudStoreCoder:(id)arg1;
-(id)recordTypesAndNamesIncludingServerData:(BOOL)arg1;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg1;

@end
