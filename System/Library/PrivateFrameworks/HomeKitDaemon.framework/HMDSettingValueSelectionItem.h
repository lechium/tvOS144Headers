/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID, NSString;

@interface HMDSettingValueSelectionItem : NSObject {

	NSUUID* _identifier;
	NSString* _selection;

}

@property (copy,readonly) NSUUID * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * selection;              //@synthesize selection=_selection - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(NSString *)selection;
-(id)initWithIdentifier:(id)arg1 selection:(id)arg2 ;
@end

