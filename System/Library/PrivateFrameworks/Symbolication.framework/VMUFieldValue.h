/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VMUFieldInfo;

@interface VMUFieldValue : NSObject {

	VMUFieldInfo* _field;
	unsigned long long _value;

}

@property (nonatomic,readonly) VMUFieldInfo * field; 
@property (nonatomic,readonly) unsigned long long value; 
-(unsigned long long)value;
-(VMUFieldInfo *)field;
-(id)initWithField:(id)arg1 value:(unsigned long long)arg2 ;
@end

