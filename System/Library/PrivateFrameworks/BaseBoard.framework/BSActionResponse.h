/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class BSSettings, NSError, NSString;

@interface BSActionResponse : NSObject <NSCopying, BSXPCCoding, BSSettingDescriptionProvider, BSDescriptionProviding> {

	BSSettings* _info;
	NSError* _error;

}

@property (nonatomic,copy,readonly) BSSettings * info;              //@synthesize info=_info - In the implementation block
@property (nonatomic,retain,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)response;
+(id)responseForError:(id)arg1 ;
+(id)responseWithInfo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BSSettings *)info;
-(id)initWithInfo:(id)arg1 error:(id)arg2 ;
@end

