/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface MRTextEditingAttributes : NSObject <NSCopying, NSMutableCopying> {

	NSString* _title;
	NSString* _prompt;
	MRTextInputTraits _inputTraits;

}

@property (nonatomic,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * prompt;                          //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,readonly) MRTextInputTraits inputTraits;              //@synthesize inputTraits=_inputTraits - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)title;
-(NSString *)prompt;
-(MRTextInputTraits)inputTraits;
-(id)initWithTitle:(id)arg1 prompt:(id)arg2 ;
@end

