/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSXPCCoder.h>

@protocol OS_xpc_object;
@class NSXPCConnection, NSObject;

@interface NSXPCDecoder : NSXPCCoder {

	unsigned long long _genericIndex;
	SCD_Struct_NS73* _decoder;
	NSXPCConnection* _connection;
	/*function pointer*/void** _collections[272];
	SCD_Struct_NS74 _rootObject;
	BOOL expectsUnnestedCollection;
	BOOL decodedCollection;
	unsigned _collectionPointer;
	id _allowedClassesList[272];
	long long _allowedClassesIndex;
	NSObject*<OS_xpc_object> _oolObjects;

}

@property (assign) NSXPCConnection * _connection;              //@synthesize connection=_connection - In the implementation block
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(BOOL)allowsKeyedCoding;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(id)allowedClasses;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(NSXPCConnection *)_connection;
-(id)decodeObject;
-(double)decodeDoubleForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(id)decodeXPCObjectOfType:(xpc_type_sRef)arg1 forKey:(id)arg2 ;
-(int)decodeIntForKey:(id)arg1 ;
-(id)decodeObjectForKey:(id)arg1 ;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(id)_decodeArrayOfObjectsForKey:(id)arg1 ;
-(id)decodeArrayOfObjectsOfClasses:(id)arg1 forKey:(id)arg2 ;
-(id)decodeDictionaryWithKeysOfClasses:(id)arg1 objectsOfClasses:(id)arg2 forKey:(id)arg3 ;
-(void)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(BOOL)arg3 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(id)_decodeObjectOfClasses:(id)arg1 atObject:(SCD_Struct_NS74*)arg2 ;
-(id)_decodeCollectionOfClass:(Class)arg1 allowedClasses:(id)arg2 forKey:(id)arg3 ;
-(void)set_connection:(NSXPCConnection *)arg1 ;
-(id)_decodeReplyFromXPCObject:(id)arg1 forSelector:(SEL)arg2 interface:(id)arg3 ;
-(int)_decodeMessageFromXPCObject:(id)arg1 allowingSimpleMessageSend:(BOOL)arg2 outInvocation:(id*)arg3 outArguments:(id*)arg4 outArgumentsMaxCount:(unsigned long long)arg5 outMethodSignature:(id*)arg6 outSelector:(SEL*)arg7 interface:(id)arg8 ;
-(void)_startReadingFromXPCObject:(id)arg1 ;
-(id)decodeXPCObjectForKey:(id)arg1 ;
-(id)connection;
-(int)__decodeXPCObject:(id)arg1 allowingSimpleMessageSend:(BOOL)arg2 outInvocation:(id*)arg3 outArguments:(id*)arg4 outArgumentsMaxCount:(unsigned long long)arg5 outMethodSignature:(id*)arg6 outSelector:(SEL*)arg7 isReply:(BOOL)arg8 replySelector:(SEL)arg9 interface:(id)arg10 ;
-(id)_xpcObjectForIndex:(long long)arg1 ;
-(void)_validateAllowedXPCType:(xpc_type_sRef)arg1 forKey:(id)arg2 ;
-(const char*)_decodeCStringForKey:(id)arg1 ;
@end

