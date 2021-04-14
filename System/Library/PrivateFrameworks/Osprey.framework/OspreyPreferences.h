/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class OspreyKeychain;

@interface OspreyPreferences : NSObject {

	OspreyKeychain* _keychain;

}
-(void)synchronize;
-(id)connections;
-(id)initWithKeychain:(id)arg1 ;
-(id)connectionPreferencesForHost:(id)arg1 ;
-(void)deleteConnectionPreferencesForHost:(id)arg1 ;
-(void)setConnectionPreferences:(id)arg1 ;
@end
